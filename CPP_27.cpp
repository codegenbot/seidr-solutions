#include<iostream>
#include<string>
#include <ostream>
using namespace std;
/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
string flip_case(string str){
	int i,j;
	for(i=0;i<str.size();i++){
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
		else
			str[i]=str[i]+32;
	}
	return str;
}
int main()
{
	assert (filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
	assert (filp_case("We all fall down.") == "wE ALL FALL DOWN.");
	assert (filp_case("I'm going to make him an offer he can't refuse.") == "i'M GOING TO MAKE HIM AN OFFER HE CAN'T REFUSE.");
	assert (filp_case("Do you feel lucky, punk?") == "dO YOU FEEL LUCKY, PUNK?");
	assert (filp_case("You're god damn right.") == "yOU'RE GOD DAMN RIGHT.");
	assert (filp_case("A man's got to know his limitations.") == "a MAN'S GOT TO KNOW HIS LIMITATIONS.");
	assert (filp_case("I know what you're thinking. Did he fire six shots or only five? Well, to tell you the truth, in all this excitement, I've kinda lost track myself. But being this is a .44 Magnum, the most powerful handgun in the world, and would blow your head clean off, you've got to ask yourself one question: Do I feel lucky? Well, do ya, punk?") == "i KNOW WHAT YOU'RE THINKING. DID HE FIRE SIX SHOTS OR ONLY FIVE? wELL, TO TELL YOU THE TRUTH, IN ALL THIS EXCITEMENT, i'VE KINDA LOST TRACK MYSELF. bUT BEING THIS IS A .44 mAGNUM, THE MOST POWERFUL HANDGUN IN THE WORLD, AND WOULD BLOW YOUR HEAD CLEAN OFF, yOU'VE GOT TO ASK YOURSELF ONE QUESTION: dO i FEEL LUCKY? wELL, DO YA, PUNK?");
	assert (filp_case("Go ahead, make my day.") == "gO AHEAD, MAKE MY DAY.");
	assert (filp_case("We're gonna need a bigger boat.") == "wE'RE GONNA NEED A BIGGER BOAT.");
	assert (filp_case("I have always depended on the kindness of strangers.") == "i HAVE ALWAYS DEPENDED ON THE KINDNESS OF STRANGERS.");
	assert (filp_case("I love the smell of napalm in the morning.") == "i LOVE THE SMELL OF NAPALM IN THE MORNING.");
	assert (filp_case("Houston, we have a problem.") == "hOUSTON, WE HAVE A PROBLEM.");
	assert (filp_case("You can't handle the truth!") == "yOU CAN'T HANDLE THE TRUTH!");
	assert (filp_case("I'll be back.") == "i'LL BE BACK.");
	assert (filp_case("They may take our lives, but they'll never take our freedom!") == "tHEY MAY TAKE OUR LIVES, BUT THEY'LL NEVER TAKE OUR FREEDOM!");
	assert (filp_case("I see dead people.") == "i SEE DEAD PEOPLE.");
	assert (filp_case("You had me at 'hello.'") == "yOU HAD ME AT 'hELLO.'");
	assert (filp_case("You talking to me?") == "yOU TALKING TO ME?");
	assert (filp_case("Elementary, my dear Watson.") == "eLEMENTARY, MY DEAR wATSON.");
	assert (filp_case("Say 'hello' to my little friend!") == "sAY 'hELLO' TO MY LITTLE FRIEND!");
	assert (filp_case("My precious.") == "mY PRECIOUS.");
	assert (filp_case("Bond. James Bond.") == "bOND. jAMES bOND.");
	assert (filp_case("Elementary, my dear Watson.") == "eLEMENTARY, MY DEAR wATSON.");
	assert (filp_case("Here's looking at you, kid.") == "hERE'S LOOKING AT YOU, KID.");
	assert (filp_case("I'll have what she's having.") == "i'LL HAVE WHAT SHE'S HAVING.");
	assert (filp_case("I am serious. And don't call me Shirley.") == "i AM SERIOUS. aND DON'T CALL ME sHIRLEY.");
	assert (filp_case("I feel the need - the need for speed!") == "i FEEL THE NEED - THE NEED FOR SPEED!");
	assert (filp_case("I'll get you, my pretty, and your little dog too!") == "i'LL GET YOU, MY PRETTY, AND YOUR LITTLE DOG TOO!");
	assert (filp_case("I'm king of the world!") == "i'M KING OF THE WORLD!");
	assert (filp_case("I've seen things you people wouldn't believe. Attack ships on fire off the shoulder of Orion. I watched C-beams glitter in the dark near the Tannhäuser Gate. All those moments will be lost in time, like tears in rain. Time to die.") == "i'VE SEEN THINGS YOU PEOPLE WOULDN'T BELIEVE. aTTACK SHIPS ON FIRE OFF THE SHOULDER OF oRION. i WATCHED c-BEAMS GLITTER IN THE DARK NEAR THE tANNHäUSER gATE. aLL THOSE MOMENTS WILL BE LOST IN TIME, LIKE TEARS IN RAIN. tIME TO DIE.");
	assert (filp_case("Keep your friends close, but your enemies closer.") == "kEEP YOUR FRIENDS CLOSE, BUT YOUR ENEMIES CLOSER.");
	assert (filp_case("Luck is what happens when preparation meets opportunity.") == "lUCK IS WHAT HAPPENS WHEN PREPARATION MEETS OPPORTUNITY.");
	assert (filp_case("Mama always said life was like a box of chocolates. You never know what you're gonna get.") == "mAMA ALWAYS SAID LIFE WAS LIKE A BOX OF CHOCOLATES. yOU NEVER KNOW WHAT YOU'RE GONNA GET.");
	assert (filp_case("May the Force be with you.") == "mAY THE fORCE BE WITH YOU.");
	assert (filp_case("Meesa called Jar-Jar Binks.") == "mEESA CALLED jAR-jAR bINKS.");
	assert (filp_case("My name is Maximus Decimus Meridius, commander of the Armies of the North, General of the Felix Legions and loyal servant to the true emperor, Marcus Aurelius. Father to a murdered son, husband to a murdered wife. And I will have my vengeance, in this life or the next.") == "mY NAME IS mAXIMUS dECIMUS mERIDIUS, COMMANDER OF THE aRMIES OF THE nORTH, gENERAL OF THE fELIX lEGIONS AND LOYAL SERVANT TO THE TRUE EMPEROR, mARCUS aURELIUS. fATHER TO A MURDERED SON, HUSBAND TO A MURDERED WIFE. aND i WILL HAVE MY VENGEANCE, IN THIS LIFE OR THE NEXT.");
	assert (filp_case("My precious.") == "mY PRECIOUS.");
	assert (filp_case("Nobody puts Baby in a corner.") == "nOBODY PUTS bABY IN A CORNER.");
	assert (filp_case("Run, Forrest, run!") == "rUN, fORREST, RUN!");
	assert (filp_case("Show me the money!") == "sHOW ME THE MONEY!");
	assert (filp_case("They may take our lives, but they'll never take our freedom!") == "tHEY MAY TAKE OUR LIVES, BUT THEY'LL NEVER TAKE OUR FREEDOM!");
	assert (filp_case("You can't handle the truth!") == "yOU CAN'T HANDLE THE TRUTH!");
	assert (filp_case("You had me at 'hello.'") == "yOU HAD ME AT 'hELLO.'");
	assert (filp_case("You talking to me?") == "yOU TALKING TO ME?");
	assert (filp_case("You're gonna need a bigger boat.") == "yOU'RE GON
	}
	return 0;
}
